//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AFDataStore : NSObject
{
    NSMutableDictionary *_entries;
}

- (void).cxx_destruct;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)propertyListRepresentation;
- (id)imageDataForKey:(id)arg1;
- (void)setImageData:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithEntries:(id)arg1;

@end

