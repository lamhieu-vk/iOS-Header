//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface PXCMMAddRecipientButton : UIButton
{
    UIView *_separatorView;
    double _separatorViewHeight;
    double _inset;
    UIColor *_separatorColor;
    struct CGSize _imageSizeToAlignWith;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) double inset; // @synthesize inset=_inset;
@property(nonatomic) struct CGSize imageSizeToAlignWith; // @synthesize imageSizeToAlignWith=_imageSizeToAlignWith;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commmonPXCMMAddRecipientButtonInitialization;

@end

