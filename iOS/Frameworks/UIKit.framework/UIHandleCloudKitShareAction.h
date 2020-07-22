//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSAction.h>

@class CKShareMetadata;

@interface UIHandleCloudKitShareAction : BSAction
{
    CKShareMetadata *_cachedMetadata;
}

+ (void)loadCloudKitFramework;
+ (id)cloudKitShareActionWithShareMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;
@property(readonly, nonatomic) CKShareMetadata *shareMetadata;
- (id)data;
- (id)initWithShareMetadata:(id)arg1;

@end

