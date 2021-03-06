//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BarcodeSupport/BCSCodePayload-Protocol.h>

@class CIBarcodeDescriptor, NSString;

__attribute__((visibility("hidden")))
@interface BCSQRCodePayload : NSObject <BCSCodePayload>
{
    CIBarcodeDescriptor *_barcodeDescriptor;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)savePayloadInUserActivity:(id)arg1;
@property(readonly, nonatomic) long long codeType;
- (id)initWithBarcodeDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

