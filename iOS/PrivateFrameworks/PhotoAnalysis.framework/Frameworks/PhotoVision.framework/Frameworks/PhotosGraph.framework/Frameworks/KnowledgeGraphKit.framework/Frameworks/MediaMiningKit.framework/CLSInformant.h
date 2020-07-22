//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLSInformant : NSObject
{
    NSString *_uuid;
}

+ (id)supportedOutputClueKeys;
+ (id)informantDependenciesIdentifiers;
+ (id)identifier;
+ (id)classIdentifier;
+ (id)familyIdentifier;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)_gatherCluesForInvestigation:(id)arg1;
- (id)gatherCluesOperationForInvestigation:(id)arg1;
- (id)uniqueIdentifier;
- (id)init;

@end

