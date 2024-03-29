//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNChangeHistoryEventFactory, CNContactStore, NSArray;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryLegacyResultConverter : NSObject
{
    CNContactStore *_contactStore;
    NSArray *_additionalContactKeyDescriptors;
    CNChangeHistoryEventFactory *_factory;
}

- (void).cxx_destruct;
@property(readonly) CNChangeHistoryEventFactory *factory; // @synthesize factory=_factory;
@property(readonly, copy) NSArray *additionalContactKeyDescriptors; // @synthesize additionalContactKeyDescriptors=_additionalContactKeyDescriptors;
@property(readonly) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)eventsFromResult:(id)arg1;
- (id)initWithContactStore:(id)arg1 additionalContactKeyDescriptors:(id)arg2;

@end

