let stack_a,
	stack_b;
function push_swap(...args) {
	args.reverse();
	stack_a = [...args];
	stack_b = [];
	think();
}

function is__sorted(stack) {
	let i = 0;
	while (i < stack.length)
	{
		if (stack[i] > stack[i + 1])
			return false;
	}
	return true;
}

function decide(action)
{

	let	collection,
		actions= ["pa", "pb", "sa", "sb", "ss", "ra", "rb", "rr", "rra", "rrb", "rrr"];
	actions.forEach(act => {
		decide(act)
	})
}

function think() {
	let decision;
	while (!is__sorted(stack_a))
	{
		while(stack_a.length)
			console.log(stack_a.pop());
	}
}