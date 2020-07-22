//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AddressBook/ABSRecord-Protocol.h>

@class ABSAddressBook, ABSSource, CNMutableGroup, NSString;

@interface ABSGroup : NSObject <ABSRecord>
{
    unsigned int _type;
    int _revertedRecordID;
    ABSAddressBook *_addressBook;
    ABSSource *_source;
    CNMutableGroup *_cnImpl;
}

+ (id)propertyKeyForPropertyID:(int)arg1;
@property(nonatomic) int revertedRecordID; // @synthesize revertedRecordID=_revertedRecordID;
@property(retain, nonatomic) CNMutableGroup *cnImpl; // @synthesize cnImpl=_cnImpl;
@property(nonatomic) __weak ABSSource *source; // @synthesize source=_source;
@property(nonatomic) __weak ABSAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)replaceRecordStorageWithCNObject:(id)arg1;
- (void)updateAllValuesWithValuesFromGroup:(id)arg1;
- (_Bool)removeProperty:(int)arg1 withError:(id *)arg2;
- (_Bool)setValue:(void *)arg1 forProperty:(int)arg2 withError:(struct __CFError **)arg3;
- (const void *)copyValueForProperty:(int)arg1;
@property(readonly, nonatomic) NSString *compositeName;
- (unsigned int)getType;
@property(readonly, nonatomic) NSString *CNIdentifierString;
@property(readonly, nonatomic) int id;
- (unsigned long long)_cfTypeID;
- (id)init;
- (id)initWithMutableGroup:(id)arg1;
- (id)initWithSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
