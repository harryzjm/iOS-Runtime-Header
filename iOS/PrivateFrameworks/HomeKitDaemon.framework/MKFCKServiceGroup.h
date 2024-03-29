//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCKHome, NSArray, NSDate, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MKFCKServiceGroup
{
}

+ (id)fetchRequest;
- (_Bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (_Bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;

// Remaining properties
@property(retain, nonatomic) NSDictionary *applicationData; // @dynamic applicationData;
@property(copy, nonatomic) NSUUID *flags; // @dynamic flags;
@property(retain, nonatomic) MKFCKHome *home; // @dynamic home;
@property(copy, nonatomic) NSUUID *homeModelID; // @dynamic homeModelID;
@property(copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSArray *services; // @dynamic services;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;
@property(copy, nonatomic) NSString *writerVersion; // @dynamic writerVersion;

@end

