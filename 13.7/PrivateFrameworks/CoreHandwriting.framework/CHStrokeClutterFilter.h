//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CHStrokeClutterFilter : NSObject
{
    struct CHCanvasHeatmap *_heatMap;
    NSDictionary *_CHStrokeID2HeatmapItemID;
    NSDictionary *_heatmapItemID2CHStrokeID;
}

@property(readonly, nonatomic) long long highDensityStrokeCount;
- (_Bool)isHighDensityStroke:(id)arg1;
- (id)debugQuickLookObject;
- (id)clutterFilterByAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 affectedStrokeIdentifiers:(id *)arg3;
- (void)dealloc;
- (id)initWithCanvasHeatmap:(struct CHCanvasHeatmap *)arg1 stroke2ItemMapping:(id)arg2 item2StrokeMapping:(id)arg3;
- (id)init;

@end

