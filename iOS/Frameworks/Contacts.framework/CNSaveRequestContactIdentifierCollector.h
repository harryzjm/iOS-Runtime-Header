//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNSaveRequest, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CNSaveRequestContactIdentifierCollector : NSObject
{
    CNSaveRequest *_request;
    NSMutableArray *_allIdentifiers;
    NSMutableArray *_insertedIdentifiers;
}

- (void).cxx_destruct;
@property(readonly) NSMutableArray *insertedIdentifiers; // @synthesize insertedIdentifiers=_insertedIdentifiers;
@property(readonly) NSMutableArray *allIdentifiers; // @synthesize allIdentifiers=_allIdentifiers;
@property(readonly) CNSaveRequest *request; // @synthesize request=_request;
- (void)visitDifferentMeCardEvent:(id)arg1;
- (void)visitUnlinkContactEvent:(id)arg1;
- (void)visitPreferredContactForNameEvent:(id)arg1;
- (void)visitPreferredContactForImageEvent:(id)arg1;
- (void)visitLinkContactsEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
@property(readonly) NSArray *insertedContactIdentifiers;
@property(readonly) NSArray *allContactIdentifiers;
- (void)collectIdentifiers;
- (id)initWithSaveRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

