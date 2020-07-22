//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/MLFeatureProvider-Protocol.h>
#import <CoreML/NSFastEnumeration-Protocol.h>

@class NSDictionary, NSSet;

@interface MLDictionaryFeatureProvider : NSObject <MLFeatureProvider, NSFastEnumeration>
{
    NSDictionary *_dictionary;
}

@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithFeatureProvider:(id)arg1;
- (id)initWithFeatureProvider:(id)arg1 featureNames:(id)arg2;

@end

