/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLCachedFilesManagerPlugin>, <PLCachedFilesManagerDelegate>, PLImageCache, NSLock, PLPhotoLibrary, NSDate, NSMutableDictionary;

@interface PLCachedFilesManager : NSObject {
    unsigned int _dcimDirectoryHasChanged : 1;
    unsigned int _iTunesDatastoreHasChanged : 1;
    unsigned int _cameraRollNeedsToBeMigrated : 1;
    unsigned int _recreateCachesDirectory : 1;
    unsigned int _iTunesDataExists : 1;
    NSMutableDictionary *_cachingMetadata;
    BOOL _cancelPostProcessing;
    NSDate *_currentDatabaseModTime;
    <PLCachedFilesManagerDelegate> *_delegate;
    PLImageCache *_imageCache;
    BOOL _isRecreatingCaches;
    NSLock *_lock;
    NSMutableDictionary *_optionsDictionary;
    PLPhotoLibrary *_photoLibrary;
    <PLCachedFilesManagerPlugin> *_plugin;
    BOOL _recreateCachesAfterCancel;
}

+ (BOOL)approximateCachesNeedToBeRecreated;

- (void)_actuallyRecreateCaches;
- (BOOL)_cachesDirectoryIsMissingOrIsEmpty;
- (BOOL)_cameraRollNeedsToBeMigrated;
- (void)_cancelRecreatingCachedFiles;
- (BOOL)_dcimDirectoryHasChanged;
- (void)_finishRecreatingCaches;
- (id)_pathToCachesMetadataFile;
- (BOOL)_photosDatabaseHasChangedSinceLastCheck;
- (void)_recreateCaches;
- (void)_saveDCIMState;
- (BOOL)cachesNeedToBeRecreated;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1 imageCache:(id)arg2;
- (void)recreateCachedFilesAfterSyncWithDelay:(id)arg1;
- (void)setDelegate:(id)arg1;

@end