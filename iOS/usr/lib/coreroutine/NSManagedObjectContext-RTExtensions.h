//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObjectContext.h>

@interface NSManagedObjectContext (RTExtensions)
- (void)saveContext:(CDUnknownBlockType)arg1;
- (id)saveContextAndWait;
- (_Bool)removeAllWithEntityDescription:(id)arg1 predicate:(id)arg2 error:(id *)arg3;
- (_Bool)removeAllExcept:(id)arg1 entityDescription:(id)arg2 error:(id *)arg3;
- (id)findAllWithEntityDescription:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id *)arg4;
- (id)findFirstMatchingWithEntityDescription:(id)arg1 predicate:(id)arg2 error:(id *)arg3;
@end
