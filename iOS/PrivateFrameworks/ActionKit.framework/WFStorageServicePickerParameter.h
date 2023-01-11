//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFiCloudDriveAccessResource;

@interface WFStorageServicePickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    WFiCloudDriveAccessResource *_iCloudDriveAccessResource;
}

+ (id)referencedActionResourceClasses;
- (void).cxx_destruct;
@property(retain, nonatomic) WFiCloudDriveAccessResource *iCloudDriveAccessResource; // @synthesize iCloudDriveAccessResource=_iCloudDriveAccessResource;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)defaultSupportedVariableTypes;
- (id)possibleStates;
- (_Bool)isHidden;
- (id)accessoryIconForPossibleState:(id)arg1;
- (void)setActionResources:(id)arg1;

@end
