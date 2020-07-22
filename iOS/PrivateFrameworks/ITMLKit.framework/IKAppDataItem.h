//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class IKDataBinding, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface IKAppDataItem : NSObject <NSCopying>
{
    NSString *_type;
    NSString *_identifier;
    IKDataBinding *_binding;
    NSDictionary *_properties;
}

@property(copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) IKDataBinding *binding; // @synthesize binding=_binding;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isDisabled) _Bool disabled;
- (id)dataItemByUpdatingProperties:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(id)arg1 identifier:(id)arg2 binding:(id)arg3;

@end

