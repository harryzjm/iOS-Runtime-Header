//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@class NSString, TRIAppContainer;

@interface TRITreatmentContentDescriptor : NSObject <NSCopying>
{
    NSString *_treatmentId;
    TRIAppContainer *_container;
}

+ (id)descriptorWithTreatmentId:(id)arg1 container:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) TRIAppContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDescriptor:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithReplacementContainer:(id)arg1;
- (id)copyWithReplacementTreatmentId:(id)arg1;
- (id)initWithTreatmentId:(id)arg1 container:(id)arg2;

@end
