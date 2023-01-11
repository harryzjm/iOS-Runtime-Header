//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMStreamDatastore;

@interface BMStreamDatastoreReader : NSObject
{
    BMStreamDatastore *_inner;
}

- (void)dealloc;
- (id)streamIdentifier;
- (Class)eventClass;
- (id)newEnumeratorFromBookmark:(id)arg1;
- (id)newEnumeratorFromStartTime:(double)arg1;
- (id)fetchEventsFrom:(double)arg1 to:(double)arg2;
- (id)initWithStream:(id)arg1 config:(id)arg2;

@end
