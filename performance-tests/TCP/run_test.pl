eval '(exit $?0)' && eval 'exec perl -S $0 ${1+"$@"}'
     & eval 'exec perl -S $0 $argv:q'
     if 0;

# $Id$
# -*- perl -*-

use lib '../../bin';
use PerlACE::Run_Test;
use Cwd;

my $SV = new PerlACE::Process ("tcp_test", "-s");

$SV->Spawn ();

sleep 5;

$CL = new PerlACE::Process ("tcp_test", " -c localhost -i 50000 -b 64");

$CL->Spawn (60);

$client = $CL->WaitKill (60);
$server = $SV->WaitKill (5);

unlink $iorfile;

if ($server != 0 || $client != 0) {
  print "ERROR: non-zero status returned by the server or client\n";
  exit 1;
}

exit 0;
