//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSSecureCoding-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSDate, NSString, SSVMediaContentTasteItem;

@interface SSVMediaContentTasteItemUpdate : NSObject <SSXPCCoding, NSSecureCoding>
{
    SSVMediaContentTasteItem *_item;
    NSDate *_updateDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *updateDate; // @synthesize updateDate=_updateDate;
@property(copy, nonatomic) SSVMediaContentTasteItem *item; // @synthesize item=_item;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
