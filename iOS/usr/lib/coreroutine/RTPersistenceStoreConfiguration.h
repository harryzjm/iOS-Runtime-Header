//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RTPersistenceStore;

@interface RTPersistenceStoreConfiguration : NSObject
{
    _Bool _readOnly;
    NSString *_name;
    RTPersistenceStore *_store;
}

- (void).cxx_destruct;
@property(readonly) __weak RTPersistenceStore *store; // @synthesize store=_store;
@property(readonly, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 readOnly:(_Bool)arg2 store:(id)arg3;
- (id)init;

@end
