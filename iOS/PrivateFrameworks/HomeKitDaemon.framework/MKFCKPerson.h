//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MKFCKPerson
{
}

+ (id)fetchRequest;
- (_Bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (_Bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;

// Remaining properties
@property(copy, nonatomic) NSUUID *flags; // @dynamic flags;
@property(copy, nonatomic) NSUUID *homeModelID; // @dynamic homeModelID;
@property(copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;
@property(copy, nonatomic) NSString *writerVersion; // @dynamic writerVersion;

@end

