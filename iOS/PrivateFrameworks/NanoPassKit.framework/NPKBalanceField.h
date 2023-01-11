//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKBalanceField-Protocol.h>

@class NSString;

@interface NPKBalanceField : NSObject <NPKBalanceField>
{
    _Bool _isPrimaryBalance;
    NSString *_label;
    NSString *_formattedValue;
    NSString *_identifier;
}

@property(readonly, nonatomic) _Bool isPrimaryBalance; // @synthesize isPrimaryBalance=_isPrimaryBalance;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *formattedValue; // @synthesize formattedValue=_formattedValue;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithLabel:(id)arg1 formattedValue:(id)arg2 identifier:(id)arg3;
- (id)initWithLabel:(id)arg1 formattedValue:(id)arg2 identifier:(id)arg3 primaryBalance:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
