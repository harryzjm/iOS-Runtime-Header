//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TPMachineIDList : NSObject
{
    NSArray *_entries;
}

- (void).cxx_destruct;
@property(readonly) NSArray *entries; // @synthesize entries=_entries;
- (id)machineIDsInStatus:(unsigned long long)arg1;
- (id)description;
- (id)entryFor:(id)arg1;
- (id)initWithEntries:(id)arg1;

@end
