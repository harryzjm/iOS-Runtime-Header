//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKFileDataAccessor.h>

@class NPKCompanionAgentConnection, NSString;

@interface NPKSettingsPreservingFileDataAccessor : PKFileDataAccessor
{
    NPKCompanionAgentConnection *_connection;
    NSString *_objectUniqueID;
}

@property(retain, nonatomic) NSString *objectUniqueID; // @synthesize objectUniqueID=_objectUniqueID;
@property(retain, nonatomic) NPKCompanionAgentConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)updateSettings:(unsigned long long)arg1;

@end
