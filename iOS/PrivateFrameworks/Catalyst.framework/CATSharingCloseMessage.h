//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString;

__attribute__((visibility("hidden")))
@interface CATSharingCloseMessage : NSObject
{
    NSError *_closeError;
}

+ (id)instanceWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *closeError; // @synthesize closeError=_closeError;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly, nonatomic) long long messageType;
- (id)initWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

