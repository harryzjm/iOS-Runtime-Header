//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CEMManagementStateCommand_Status
{
    NSArray *_statusCommands;
    NSArray *_statusDeclarations;
}

+ (id)buildRequiredOnlyWithCommands:(id)arg1 withDeclarations:(id)arg2;
+ (id)buildWithCommands:(id)arg1 withDeclarations:(id)arg2;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSArray *statusDeclarations; // @synthesize statusDeclarations=_statusDeclarations;
@property(copy, nonatomic) NSArray *statusCommands; // @synthesize statusCommands=_statusCommands;
- (void).cxx_destruct;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

