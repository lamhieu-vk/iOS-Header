//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface NibView : UIView
{
    _Bool _hasInvokedDidLoad;
    NSString *_nibName;
    NSBundle *_bundle;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)contentViewDidLoad;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) NSString *nibName; // @synthesize nibName=_nibName;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

