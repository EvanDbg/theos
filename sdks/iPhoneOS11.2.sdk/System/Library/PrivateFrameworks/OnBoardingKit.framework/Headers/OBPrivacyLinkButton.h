//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, OBTintInheritingImageView, UITextView, UIView;

__attribute__((visibility("hidden")))
@interface OBPrivacyLinkButton : UIButton
{
    BOOL _largeIcon;
    OBTintInheritingImageView *_iconView;
    UITextView *_textView;
    UIView *_containerView;
    NSString *_captionText;
    NSString *_buttonText;
    CGSize _contentSize;
}

@property CGSize contentSize; // @synthesize contentSize=_contentSize;
@property BOOL largeIcon; // @synthesize largeIcon=_largeIcon;
@property(readonly) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(readonly) NSString *captionText; // @synthesize captionText=_captionText;
@property(readonly) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly) UITextView *textView; // @synthesize textView=_textView;
@property(readonly) OBTintInheritingImageView *iconView; // @synthesize iconView=_iconView;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (id)labelText;
- (id)_textViewFont;
- (NSRange *)_rangeForButtonText;
- (id)viewForLastBaselineLayout;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)titleForState:(NSUInteger)arg1;
- (void)_updateButtonColorWithColor:(id)arg1;
- (CGSize)intrinsicContentSize;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithCaption:(id)arg1 buttonText:(id)arg2 image:(id)arg3 imageSize:(CGSize)arg4 useLargeIcon:(BOOL)arg5;

@end

