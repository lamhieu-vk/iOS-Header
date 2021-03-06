//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaServices/NSObject-Protocol.h>
#import <MediaServices/NSSecureCoding-Protocol.h>

@class NSString;

@protocol MSVSegmentedCoding <NSSecureCoding, NSObject>
- (void)didRestoreVersion:(long long)arg1 forSegment:(NSString *)arg2;
- (long long)versionForSegment:(NSString *)arg1;
- (NSString *)segmentForCodingKey:(NSString *)arg1;
@end

