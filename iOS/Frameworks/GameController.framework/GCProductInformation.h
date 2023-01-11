//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GCControllerProductInfo-Protocol.h>
#import <GameController/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface GCProductInformation : NSObject <GCControllerProductInfo, NSSecureCoding>
{
    id <NSObject><NSCopying><NSSecureCoding> _identifier;
    NSString *_productCategory;
    NSString *_vendorName;
    NSNumber *_attachedToDevice;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic, getter=isAttachedToDevice) NSNumber *attachedToDevice; // @synthesize attachedToDevice=_attachedToDevice;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(copy, nonatomic) NSString *productCategory; // @synthesize productCategory=_productCategory;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)setController:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
