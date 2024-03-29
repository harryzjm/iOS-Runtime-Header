//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSUUID;

__attribute__((visibility("hidden")))
@interface MKFLocalPersonClassificationSettings
{
}

+ (id)fetchPersonClassificationSettingsForModelID:(id)arg1 managedObjectContext:(id)arg2;
+ (id)fetchRequest;

// Remaining properties
@property(retain, nonatomic) NSSet *classificationRegistrations; // @dynamic classificationRegistrations;
@property(copy, nonatomic) NSUUID *modelID; // @dynamic modelID;

@end

