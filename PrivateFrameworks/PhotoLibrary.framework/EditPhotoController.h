/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIToolbar, <EditPhotoControllerDelegate>, NSArray, MLPhoto;



@interface EditPhotoController : UIViewController <PLCropPhotoControllerDelegate>
{
    MLPhoto *_editedPhoto;
    <EditPhotoControllerDelegate> *_delegate;
    UIToolbar *_toolbar;
    NSArray *_originalItems;
    unsigned int _didInitializeNavigationItem : 1;
    unsigned int _toolbarWasHidden : 1;
}

@property UIToolbar *toolbar;
@property(readonly) MLPhoto *editedPhoto;
@property <EditPhotoControllerDelegate> *delegate;


- (void)editPhoto:(id)arg1 inParentController:(id)arg2;
- (void)rotatePhoto:(id)arg1;
- (id)editedPhoto;
- (void)displayCropOverlay:(id)arg1;
- (void)cropPhoto:(id)arg1;
- (void)cancelCropPhoto:(id)arg1;
- (void)setToolbar:(id)arg1;
- (id)toolbar;
- (id)toolbarItems;
- (id)navigationItem;
- (void)orderOut:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end