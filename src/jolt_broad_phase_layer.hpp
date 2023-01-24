#pragma once

enum JoltBroadPhaseLayer : JPH::BroadPhaseLayer::Type {
	GDJOLT_BROAD_PHASE_LAYER_NONE,
	GDJOLT_BROAD_PHASE_LAYER_STATIC,
	GDJOLT_BROAD_PHASE_LAYER_MOVING,
	GDJOLT_BROAD_PHASE_LAYER_COUNT
};

static_assert(GDJOLT_BROAD_PHASE_LAYER_COUNT <= 8);
