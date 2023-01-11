//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSPerson, NSArray, NSDate, NSString;

@interface PGPotentialRecentPersonCentricSuggestion : NSObject
{
    CLSPerson *_person;
    NSString *_personLocalIdentifier;
    NSArray *_assets;
    NSDate *_notSeenSinceDate;
}

@property(readonly, nonatomic) NSDate *notSeenSinceDate; // @synthesize notSeenSinceDate=_notSeenSinceDate;
@property(readonly, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(readonly, nonatomic) NSString *personLocalIdentifier; // @synthesize personLocalIdentifier=_personLocalIdentifier;
@property(readonly, nonatomic) CLSPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long relationshipScore;
- (id)initWithPersonLocalIdentifier:(id)arg1 assets:(id)arg2 notSeenSinceDate:(id)arg3;
- (id)initWithCLSPerson:(id)arg1 assets:(id)arg2;

@end
