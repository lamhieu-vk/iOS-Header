//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKBaseBubbleWithTextControl.h>

@class GKLabel, GKTextStyle, NSString;

@interface GKValueWithCaptionBubbleControl : GKBaseBubbleWithTextControl
{
    NSString *_valueText;
    NSString *_captionText;
    GKTextStyle *_overrideValueStyle;
    GKTextStyle *_overrideCaptionStyle;
    GKTextStyle *_smallValueStyle;
    GKTextStyle *_normalValueStyle;
    GKTextStyle *_normalCaptionStyle;
    GKLabel *_captionLabel;
    GKLabel *_valueLabel;
}

+ (void)initialize;
@property(retain, nonatomic) GKLabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) GKLabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) GKTextStyle *normalCaptionStyle; // @synthesize normalCaptionStyle=_normalCaptionStyle;
@property(retain, nonatomic) GKTextStyle *normalValueStyle; // @synthesize normalValueStyle=_normalValueStyle;
@property(retain, nonatomic) GKTextStyle *smallValueStyle; // @synthesize smallValueStyle=_smallValueStyle;
@property(retain, nonatomic) GKTextStyle *overrideCaptionStyle; // @synthesize overrideCaptionStyle=_overrideCaptionStyle;
@property(retain, nonatomic) GKTextStyle *overrideValueStyle; // @synthesize overrideValueStyle=_overrideValueStyle;
- (void)blinkOutThenInWithValueText:(id)arg1 captionText:(id)arg2 afterDelay:(double)arg3;
- (void)layoutSubviews;
- (void)setAttributedValueText:(id)arg1;
- (void)setAttributedCaptionText:(id)arg1;
- (void)updateTextFieldsFor3DScaling;
- (void)_updateValueTextLabel;
@property(retain, nonatomic) NSString *valueText; // @synthesize valueText=_valueText;
- (void)setValueTextForInteger:(long long)arg1;
- (void)_updateCaptionTextLabel;
- (id)captionTextStyle;
- (id)valueTextStyle;
@property(retain, nonatomic) NSString *captionText; // @synthesize captionText=_captionText;
- (id)attributedValueText;
- (id)attributedCaptionText;
@property(nonatomic) _Bool oneLineOnly;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

