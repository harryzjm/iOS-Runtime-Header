//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CalDAVDBChangeTrackingHelper : NSObject
{
    NSString *_clientIdentifier;
    int _initialSequenceNumber;
    NSMutableDictionary *_savedChanges;
}

- (void).cxx_destruct;
- (_Bool)clearUnconsumedAndUnsavedChanges;
- (void)saveChange:(int)arg1 forEntityType:(int)arg2;
- (id)initWithClientIdentifier:(id)arg1;

@end
