//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, WFCoreDataWorkflow;

@interface WFCoreDataSmartPromptPermission : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSString *actionUUID; // @dynamic actionUUID;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) WFCoreDataWorkflow *shortcut; // @dynamic shortcut;

@end
