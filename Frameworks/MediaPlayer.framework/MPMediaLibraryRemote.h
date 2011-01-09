/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMachPort, MPMediaLibrary;



@interface MPMediaLibraryRemote : MPServerObjectProxy <MPMediaLibrary>
{
    MPMediaLibrary *_mediaLibrary;
    NSMachPort *_launchNotifyPort;
    NSInteger _launchNotifyPortToken;
    unsigned int _didCheckIn : 1;
    NSUInteger _serverPort;
    NSUInteger _clientPort;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSUInteger _serverConnectionDeathCount;
}


- (id)init;
- (void)dealloc;
- (void)_mediaLibraryDidLaunch;
- (void)prepareForQueryingWithMediaLibrary:(id)arg1;
- (void)_registerForLaunchNotifications;
- (void)_unregisterForLaunchNotifications;
- (void)_clientCheckIn;
- (void)_runMigServerOnPort:(NSUInteger)arg1;
- (void)_stopMigServer;
- (BOOL)prepareForRemoteSelectorInvocation;
- (void)prepareForDecodingWithCoder:(id)arg1;
- (void)serverConnectionDied;

@end