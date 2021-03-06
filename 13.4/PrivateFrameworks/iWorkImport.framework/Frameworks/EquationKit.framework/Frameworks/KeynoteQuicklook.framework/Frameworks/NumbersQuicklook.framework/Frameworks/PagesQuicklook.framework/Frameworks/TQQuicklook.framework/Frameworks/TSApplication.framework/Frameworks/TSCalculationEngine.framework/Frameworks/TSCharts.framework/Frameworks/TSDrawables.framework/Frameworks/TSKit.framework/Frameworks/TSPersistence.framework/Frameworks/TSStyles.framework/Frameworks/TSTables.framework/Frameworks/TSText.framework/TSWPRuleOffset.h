//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSText/NSCopying-Protocol.h>
#import <TSText/TSSPropertyValueArchiving-Protocol.h>

@interface TSWPRuleOffset : NSObject <TSSPropertyValueArchiving, NSCopying>
{
    double _dX;
    double _dY;
}

+ (id)instanceWithArchive:(const struct Message *)arg1 unarchiver:(id)arg2;
+ (id)ruleOffsetWithDX:(double)arg1 dY:(double)arg2;
+ (id)ruleOffset;
@property(readonly, nonatomic) double dY; // @synthesize dY=_dY;
@property(readonly, nonatomic) double dX; // @synthesize dX=_dX;
- (id)description;
- (struct CGSize)sizeValue;
- (struct CGPoint)pointValue;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
-     // Error parsing type: v32@0:8^{Point=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}ff}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @32@0:8r^{Point=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}ff}16@24, name: initWithArchive:unarchiver:
- (id)init;
- (id)initWithDX:(double)arg1 dY:(double)arg2;

@end

