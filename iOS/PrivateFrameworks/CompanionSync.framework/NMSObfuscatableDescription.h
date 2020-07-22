//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NMSObfuscatableDescription : NSObject
{
    NSString *_prefixString;
    NSMutableArray *_items;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *prefixString; // @synthesize prefixString=_prefixString;
- (void).cxx_destruct;
- (id)CPSafeDescription;
- (id)description;
- (id)_descriptionObfuscated:(_Bool)arg1;
- (void)addObfuscatedDescriptionFormat:(id)arg1 value:(id)arg2;
- (void)addDescriptionFormat:(id)arg1 value:(id)arg2;
- (id)init;

@end

