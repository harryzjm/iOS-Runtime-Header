//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSObject, NSPredicate, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDNameValidator : HMFObject
{
    NSMutableDictionary *_namespaceList;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_homeManagerUUID;
    NSPredicate *_nonZeroLengthPredicate;
}

@property(retain, nonatomic) NSPredicate *nonZeroLengthPredicate; // @synthesize nonZeroLengthPredicate=_nonZeroLengthPredicate;
@property(retain, nonatomic) NSUUID *homeManagerUUID; // @synthesize homeManagerUUID=_homeManagerUUID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableDictionary *namespaceList; // @synthesize namespaceList=_namespaceList;
- (void).cxx_destruct;
- (id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3 voiceShortcutCheck:(_Bool)arg4;
- (id)replaceActionSetName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;
- (id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;
- (id)removeName:(id)arg1 namespace:(id)arg2;
- (id)addName:(id)arg1 namespace:(id)arg2 voiceShortcutCheck:(_Bool)arg3;
- (id)addActionSetName:(id)arg1 namespace:(id)arg2;
- (id)addName:(id)arg1 namespace:(id)arg2;
- (id)checkForConflict:(id)arg1 namespace:(id)arg2;
- (id)validateName:(id)arg1;
- (id)removeNamespace:(id)arg1;
- (id)addNamespace:(id)arg1;
- (id)_replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;
- (id)_removeName:(id)arg1 namespace:(id)arg2;
- (id)_addName:(id)arg1 namespace:(id)arg2;
- (id)_checkForConflict:(id)arg1 namespace:(id)arg2;
- (id)_validateName:(id)arg1;
- (id)despaceName:(id)arg1;
- (id)_removeNamespace:(id)arg1;
- (id)_addNamespace:(id)arg1;
- (id)initWithUUID:(id)arg1;

@end

