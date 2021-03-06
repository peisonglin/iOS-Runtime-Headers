/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentCredentialCache : NSObject {
    PKPaymentCredential * _credential;
    bool  _isSelected;
    UIImage * _passSnapshot;
    PKPaymentPass * _paymentPass;
}

@property (nonatomic, retain) PKPaymentCredential *credential;
@property (nonatomic) bool isSelected;
@property (nonatomic, retain) UIImage *passSnapshot;
@property (nonatomic, retain) PKPaymentPass *paymentPass;

- (void).cxx_destruct;
- (id)credential;
- (bool)isSelected;
- (id)passSnapshot;
- (id)paymentPass;
- (void)setCredential:(id)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setPassSnapshot:(id)arg1;
- (void)setPaymentPass:(id)arg1;

@end
