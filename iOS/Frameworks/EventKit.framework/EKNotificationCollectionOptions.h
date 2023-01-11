//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKSource, NSString;

@interface EKNotificationCollectionOptions : NSObject
{
    EKSource *_source;
    NSString *_externalID;
    NSString *_externalIDTag;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *externalIDTag; // @synthesize externalIDTag=_externalIDTag;
@property(readonly, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(readonly, nonatomic) EKSource *source; // @synthesize source=_source;
- (id)description;
- (id)initWithExternalID:(id)arg1 externalIDTag:(id)arg2 inSource:(id)arg3;

@end
