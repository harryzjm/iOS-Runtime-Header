//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KNBuildAttributes, NSArray, NSDictionary, NSString;

@interface KNAnimatedBuild : NSObject
{
    KNAnimatedBuild *_parentBuild;
    _Bool _automatic;
    _Bool _animateAtEndOfPreviousBuild;
    _Bool _isVisibleAtBeginning;
    _Bool _isVisibleAtEnd;
    _Bool _isLastStage;
    _Bool _isInitialAmbientBuild;
    long long _buildType;
    NSString *_effectIdentifier;
    long long _eventIndex;
    long long _indexInEvent;
    long long _stageIndex;
    unsigned long long _direction;
    unsigned long long _deliveryOption;
    unsigned long long _deliveryStyle;
    Class _pluginClass;
    KNBuildAttributes *_attributes;
    double _startTime;
    double _eventStartTime;
    double _duration;
    double _endTime;
    double _eventEndTime;
    NSDictionary *_previousAttributes;
    NSDictionary *_finalAttributes;
    NSArray *_childBuilds;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *childBuilds; // @synthesize childBuilds=_childBuilds;
@property(copy, nonatomic) NSDictionary *finalAttributes; // @synthesize finalAttributes=_finalAttributes;
@property(copy, nonatomic) NSDictionary *previousAttributes; // @synthesize previousAttributes=_previousAttributes;
@property(nonatomic) _Bool isInitialAmbientBuild; // @synthesize isInitialAmbientBuild=_isInitialAmbientBuild;
@property(nonatomic) _Bool isLastStage; // @synthesize isLastStage=_isLastStage;
@property(nonatomic) _Bool isVisibleAtEnd; // @synthesize isVisibleAtEnd=_isVisibleAtEnd;
@property(nonatomic) _Bool isVisibleAtBeginning; // @synthesize isVisibleAtBeginning=_isVisibleAtBeginning;
@property(nonatomic) _Bool animateAtEndOfPreviousBuild; // @synthesize animateAtEndOfPreviousBuild=_animateAtEndOfPreviousBuild;
@property(readonly, nonatomic) _Bool automatic; // @synthesize automatic=_automatic;
@property(readonly, nonatomic) double eventEndTime; // @synthesize eventEndTime=_eventEndTime;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double eventStartTime; // @synthesize eventStartTime=_eventStartTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) KNBuildAttributes *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) Class pluginClass; // @synthesize pluginClass=_pluginClass;
@property(readonly, nonatomic) unsigned long long deliveryStyle; // @synthesize deliveryStyle=_deliveryStyle;
@property(readonly, nonatomic) unsigned long long deliveryOption; // @synthesize deliveryOption=_deliveryOption;
@property(readonly, nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) long long stageIndex; // @synthesize stageIndex=_stageIndex;
@property(nonatomic) long long indexInEvent; // @synthesize indexInEvent=_indexInEvent;
@property(nonatomic) long long eventIndex; // @synthesize eventIndex=_eventIndex;
@property(readonly, nonatomic) NSString *effectIdentifier; // @synthesize effectIdentifier=_effectIdentifier;
@property(readonly, nonatomic) long long buildType; // @synthesize buildType=_buildType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) double finalRotation;
@property(readonly, nonatomic) double initialRotation;
@property(readonly, nonatomic) NSArray *requiredScales;
@property(readonly, nonatomic) double maxScale;
@property(readonly, nonatomic) double finalScale;
@property(readonly, nonatomic) double initialScale;
@property(readonly, nonatomic) _Bool hasFinalActionRotate;
@property(readonly, nonatomic) _Bool hasFinalActionScale;
@property(readonly, nonatomic) _Bool hasPreviousActionRotate;
@property(readonly, nonatomic) _Bool hasPreviousActionScale;
@property(readonly, nonatomic) _Bool hasPreviousActionAttributes;
@property(readonly, nonatomic) _Bool isActionMotionPath;
@property(readonly, nonatomic) _Bool isActionOpacity;
@property(readonly, nonatomic) _Bool isActionRotation;
@property(readonly, nonatomic) _Bool isActionScale;
- (_Bool)p_isActionEffect:(id)arg1;
- (void)addChildBuild:(id)arg1;
- (_Bool)isRelatedTo:(id)arg1;
- (_Bool)isSiblingTo:(id)arg1;
@property(readonly, nonatomic) double durationWithChildren;
@property(readonly, nonatomic) _Bool isChildBuild;
@property(readonly, nonatomic) _Bool isParentBuild;
@property(readonly, nonatomic) KNAnimatedBuild *parentBuild;
- (_Bool)isBuildByObject;
@property(readonly, nonatomic) _Bool isImplicitlyVisibleAtBeginning;
@property(readonly, nonatomic) _Bool isMagicChartBuild;
@property(readonly, nonatomic) _Bool isDriftBuild;
@property(readonly, nonatomic) _Bool isLineDrawBuild;
@property(readonly, nonatomic) _Bool isContentBuild;
@property(readonly, nonatomic) _Bool isEmphasisBuild;
@property(readonly, nonatomic) _Bool isActionBuild;
@property(readonly, nonatomic) _Bool isBuildOut;
@property(readonly, nonatomic) _Bool isBuildIn;
- (id)description;
- (id)initWithBuildType:(long long)arg1 effectIdentifier:(id)arg2 attributes:(id)arg3 pluginClass:(Class)arg4 deliveryStyle:(unsigned long long)arg5 deliveryOption:(unsigned long long)arg6 eventIndex:(long long)arg7 stageIndex:(long long)arg8 startTime:(double)arg9 eventStartTime:(double)arg10 duration:(double)arg11 direction:(unsigned long long)arg12 automatic:(_Bool)arg13 animateAtEndOfPreviousBuild:(_Bool)arg14 parentBuild:(id)arg15;

@end

