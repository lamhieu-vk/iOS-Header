//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIBoundingPathBitmap : NSObject <NSSecureCoding>
{
    struct _UIBoundingPathBitmapData _bitmapData;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) struct _UIBoundingPathBitmapData bitmapData; // @synthesize bitmapData=_bitmapData;
- (id)description;
- (id)boundingPathBitmapWithRect:(struct _UIIntegralRect)arg1;
- (void)dealloc;
- (id)initWithBitmapData:(struct _UIBoundingPathBitmapData)arg1;
- (id)initWithSize:(struct _UIIntegralSize)arg1 containsPoint:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

