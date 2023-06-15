//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;
@protocol HMDAccessorySymptomsDelegate;

__attribute__((visibility("hidden")))
@interface HMDSymptomContainer : NSObject
{
    NSString *_idsIdentifier;
    id <HMDAccessorySymptomsDelegate> _delegate;
    NSSet *_symptoms;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *symptoms; // @synthesize symptoms=_symptoms;
@property(nonatomic) __weak id <HMDAccessorySymptomsDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
- (id)initWithIDSIdentifier:(id)arg1;

@end

