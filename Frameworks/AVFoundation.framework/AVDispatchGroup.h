/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVDispatchGroup : NSObject {
    NSObject<OS_dispatch_queue> * _ivarAccessQueue;
    NSArray * _notifyBlocks;
    long long  _outstandingOperations;
}

- (void)dealloc;
- (void)enter;
- (void)finalize;
- (id)init;
- (void)leave;
- (void)notifyUsingBlock:(id /* block */)arg1;

@end
