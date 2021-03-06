//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NavSignLayoutBase.h"

#import "NavMessageSignLayoutDelegate-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NavMessageSignLayout : NavSignLayoutBase <NavMessageSignLayoutDelegate>
{
}

+ (id)sharedMessageSignLayout;
- (long long)navSignView:(id)arg1 textAlignmentForMajorText:(_Bool)arg2;
- (_Bool)navSignView:(id)arg1 shouldAlignToTrailingForMajorText:(_Bool)arg2;
- (_Bool)navSignView:(id)arg1 shouldAlignToLeadingForMajorText:(_Bool)arg2;
- (_Bool)shouldAlignMinorToMajorLabelLeadingForSign:(id)arg1;
- (double)navSignView:(id)arg1 alternateFontLineSpacingForMajorText:(_Bool)arg2;
- (id)navSignView:(id)arg1 alternateFontForMajorText:(_Bool)arg2;
- (id)navSignView:(id)arg1 preferredFontForMajorText:(_Bool)arg2;
- (double)baselineMarginBetweenLabelsForSign:(id)arg1;
- (double)textBottomMarginForSign:(id)arg1;
- (double)textTopMarginForSign:(id)arg1;
- (double)navSignView:(id)arg1 textLeadingMarginForMajorText:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

