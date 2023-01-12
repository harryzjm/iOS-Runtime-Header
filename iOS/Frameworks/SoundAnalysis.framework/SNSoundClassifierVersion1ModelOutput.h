//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/MLFeatureProvider-Protocol.h>

@class NSDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface SNSoundClassifierVersion1ModelOutput : NSObject <MLFeatureProvider>
{
    NSDictionary *__646;
    NSString *_classLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *classLabel; // @synthesize classLabel=_classLabel;
@property(retain, nonatomic) NSDictionary *_646; // @synthesize _646=__646;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWith_646:(id)arg1 classLabel:(id)arg2;

@end
