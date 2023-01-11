//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CRKCloudStoring;

@interface CRKCloudTuple : NSObject
{
    id <CRKCloudStoring> _originalObject;
    id <CRKCloudStoring> _changedObject;
}

+ (id)new;
@property(readonly, nonatomic) id <CRKCloudStoring> changedObject; // @synthesize changedObject=_changedObject;
@property(readonly, nonatomic) id <CRKCloudStoring> originalObject; // @synthesize originalObject=_originalObject;
- (void).cxx_destruct;
- (id)initWithChangedObject:(id)arg1 originalObject:(id)arg2;
- (id)init;

@end

