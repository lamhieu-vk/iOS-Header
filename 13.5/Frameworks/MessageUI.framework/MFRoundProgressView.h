//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSDate, NSTimer;

@interface MFRoundProgressView : UIView
{
    struct CGPoint _pieCenter;
    double _pieRadius;
    NSTimer *_progressTimer;
    NSDate *_prevUpdateTime;
    double _uiProgress;
    double _realProgress;
    double _increaseRate;
    UIView *_contentView;
    CAShapeLayer *_sliceLayer;
    CAShapeLayer *_circleLayer;
    double _progress;
}

- (void).cxx_destruct;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)resetProgress;
- (void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2;
- (void)_updateUIProgress;
- (void)increaseUIProgress:(id)arg1;
- (double)toRadian:(double)arg1;
- (void)startProgressTimer;
- (void)stopProgressTimer;
- (void)setPieRadius:(double)arg1;
- (void)_updateSubviews;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

