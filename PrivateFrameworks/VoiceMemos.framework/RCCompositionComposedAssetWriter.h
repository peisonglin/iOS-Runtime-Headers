/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class AVAssetExportSession, RCComposition, RCWaveformDataSource;

@interface RCCompositionComposedAssetWriter : NSObject {
    BOOL _canGenerateWaveform;
    BOOL _canGenerateWaveformByProcessingAVURL;
    BOOL _canSaveCompositionMetadata;
    RCComposition *_composition;
    AVAssetExportSession *_exportSession;
    RCWaveformDataSource *_waveformDataSource;
}

@property BOOL canGenerateWaveform;
@property BOOL canGenerateWaveformByProcessingAVURL;
@property BOOL canSaveCompositionMetadata;
@property(readonly) RCComposition * composition;
@property(readonly) float progress;

- (void).cxx_destruct;
- (void)_writeCompositionWaveformForFinalizedAssetFromFragmentsWithCompletionHandler:(id)arg1;
- (void)_writeCompositionWaveformForFinalizedAssetWithCompletionHandler:(id)arg1;
- (void)_writeCompositionWithCompletionHandler:(id)arg1;
- (BOOL)canGenerateWaveform;
- (BOOL)canGenerateWaveformByProcessingAVURL;
- (BOOL)canSaveCompositionMetadata;
- (void)cancel;
- (id)composition;
- (id)initWithComposition:(id)arg1;
- (float)progress;
- (void)setCanGenerateWaveform:(BOOL)arg1;
- (void)setCanGenerateWaveformByProcessingAVURL:(BOOL)arg1;
- (void)setCanSaveCompositionMetadata:(BOOL)arg1;
- (void)writeCompositionWithCompletionBlock:(id)arg1;

@end