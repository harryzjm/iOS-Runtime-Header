//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CATIDSPrimitives-Protocol.h>

@protocol CRKIDSAddressTranslator, CRKIDSPrimitives;

@interface CRKCatalystIDSPrimitives : NSObject <CATIDSPrimitives>
{
    id <CRKIDSPrimitives> _primitives;
    id <CRKIDSAddressTranslator> _addressTranslator;
}

+ (id)crkOptionsFromOptions:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CRKIDSAddressTranslator> addressTranslator; // @synthesize addressTranslator=_addressTranslator;
@property(readonly, nonatomic) id <CRKIDSPrimitives> primitives; // @synthesize primitives=_primitives;
- (void)sendMessage:(id)arg1 toAddress:(id)arg2 fromID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)addressForAppleID:(id)arg1;
- (void)addMessageHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPrimitives:(id)arg1 addressTranslator:(id)arg2;

@end
